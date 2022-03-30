package com.example.datastructures.stack;

import java.util.Stack;

public class StackStuff {
    public static void main(String[] args) {

        Stack<String> stack = new Stack<>();
        stack.push("Vaishu");
        stack.push("is");
        stack.push("a");
        stack.push("Dodo");

        //pop removes top element
        System.out.println(stack.pop());
        System.out.println(stack);
        //peek returns top element
        System.out.println(stack.peek());
        boolean flag = stack.contains("a");
        if (flag) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        String res = (stack.empty()) ? "Empty" : "Not Empty: " + stack.size();
        System.out.println(res);
    }
}
