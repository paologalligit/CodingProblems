public class Node {
    private int value;
    private Node next;

    public Node(int value) {
        this(value, null);
    }

    public Node(int value, Node next){
        //System.out.println(value);
        this.value = value;
        this.next = next;
    }

    public static Node reverseInPlace(Node root) {
        Node result = null;

        if(root != null) {
            if(root.next != null) {
                Node old = root;
                Node start = old.next;
                Node tmp = null;

                old.next = null;
                while(start.next != null) {
                    tmp = start.next;
                    start.next = old;
                    old = start;
                    start = tmp;
                }

                start.next = old;
                result = start;
            }
            else {
                result = root;
            }
        }

        return result;
    }

    public static void printList(Node root) {
        while(root != null) {
            System.out.print(root.value + " -> ");
            root = root.next;
        }
        System.out.println("NULL");
    }
}
