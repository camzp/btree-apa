using System;
using System.Collections;
using System.Collections.Generic;
					
public class Program
{
    static Node root;

    static int[] baseArray;

    static string line;
    static bool checkConversion;
    static int convertedLine;

	public static void Main()
	{
        line = Console.ReadLine();
			
		checkConversion = int.TryParse(line, out convertedLine);

        baseArray = new int[convertedLine];
        UpdateArrayValues();
        MountTree(0, convertedLine);
        PrintTree(root, 0);
	}

    private static void UpdateArrayValues()
    {
        if(baseArray != null)
        {
            Random randNum = new Random();

            for(int i = 0; i < convertedLine; i++)
            {
                baseArray[i] = randNum.Next(100);
                Console.WriteLine(baseArray[i]); 
            }
        }
    }

    private static Node MountTree(int init, int final)
    {
        if(init >= final) 
            return null;

        Random randNum = new Random();
        int random = randNum.Next(init, final - 1);

        Node node = new Node(baseArray[random]);

        if(root == null) 
            root = node;

        node.SetNodeLeft(MountTree(init, random - 1));
        node.SetNodeRight(MountTree(random, final - 1));

        return node;
    }

    private void AddNode(int index)
    {

    }

    private static void PrintTree(Node node, int height)
    {
        PrintTree(node.GetNodeLeft(), height + 1);

        if(node == null)
            return;

        string line = "   ";

        for(int i = 0; i < height; i++)
        {
            line += line;
        }

        Console.WriteLine(line + node.GetValue());

        PrintTree(node.GetNodeRight(), height + 1);
    }
}



public class Node
{
    int index;
    int value;

    Node left;
    Node right;

    public Node(int value)
    {
        this.value = value;
    }

    public int GetValue()
    {
        return this.value;
    }

    public void SetIndex(int index)
    {
        this.index = index;
    }

    public void SetNodeLeft(Node left)
    {
        this.left = left;
    }

    public Node GetNodeLeft()
    {
        return left;
    }

    public void SetNodeRight(Node right)
    {
        this.right = right;
    }

    public Node GetNodeRight()
    {
        return right;
    }
}