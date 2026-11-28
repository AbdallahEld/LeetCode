public class MyStack {

    private Queue<int> q1;
    private Queue<int> q2;

    public MyStack() {
        q1 = new Queue<int>();
        q2 = new Queue<int>();
    }
    
    public void Push(int x) {
        q2.Enqueue(x);

while (q1.Count > 0)
{
    q2.Enqueue(q1.Peek());
    q1.Dequeue();
}

Queue<int> temp = q1;
q1 = q2;
q2 = temp;
    }
    
    public int Pop() {
        if (q1.Count == 0)
{
    Console.WriteLine("Stack is empty");
    return -1;
}
return q1.Dequeue();
    }
    
    public int Top() {
        if (q1.Count == 0)
{
    Console.WriteLine("Stack is empty");
    return -1;
}

return q1.Peek();
    }
    
    public bool Empty() {
        return q1.Count == 0;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Top();
 * bool param_4 = obj.Empty();
 */