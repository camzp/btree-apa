using System;
using System.Collections.Generic;
					
public class Program
{
	public static void Main()
	{
		
	}
}

public class Node
{
    int index;
    int value;

    Node left;
    Node right;

    public Node(int index, int value)
    {
        this.index = index;
        this.value = value;
    }

    public void SetNodeLeft(Node left)
    {
        this.left = left;
    }

    public void SetNodeRight(Node right)
    {
        this.right = right;
    }
}