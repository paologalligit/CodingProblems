public class ReverseLinkedList {
    public static void main(String[] args) {
        Node a = new Node(1);
        Node b = new Node(2, a);
        Node c = new Node(3, b);
        Node d = new Node(4, c);
        Node e = new Node(5, d);
        Node f = new Node(6, e);

        Node.printList(f);

        f = Node.reverseInPlace(f);

        Node.printList(f);
    }
}
