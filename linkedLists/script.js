// 1q) how does it add new nodes to its chain of the constant? in this example its tst constant. how are adding new nodes and linking it to previous node.



class Node{
    constructor(data, next = null){
        this.data = data;
        this.next = next;

    }
}
class LinkedList{
    //1a) ohh so first we are making a head node with head = null
    constructor(){
        this.head = null;
        this.size = 0;
    }

    // 1a) then we are adding the data and redefining the head node to new node.
    // insert first
    insertFirst(data){
        // console.log("before", this.head)
        // 1a)this.head(old head) = new head(but make the old head the {next} for Node class)
        this.head = new Node(data, this.head)
        // console.log("after", this.head)
    }



    // print list
    printlistData(){
        let current = this.head;
        
        while(current){
            
            console.log(current.data)
            console.log("this is the next node connection ",current.next)
            current = current.next;
           
        }
    }
}


const tst = new LinkedList();

tst.insertFirst(100)
tst.insertFirst(200)
tst.insertFirst(300)
// console.log(tst)

tst.printlistData()





