/**
 * LinkedList
 */
public class LinkedList {
    public class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }

    private Node head;
    private Node tail;
    private int s=0;
    
    public void insert(int val){
        Node nn =new Node(val);


        if(s==0){

            head = nn;
        }
        else{
            s++;
            tail.next = nn;
            tail = nn;
        }




    }
    public  void display(Node head){
        while(head!=null){

            
            System.out.println(head.data);
            head = head.next;
        }

    }

    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.insert(1);
        ll.insert(2);
        ll.insert(3);

        ll.display(head);
    }
}