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
        this.size++;
        // console.log("after", this.head)
    }



    // print list
    printlistData(){
        let current = this.head;
        
        while(current){
            
            console.log(current.data)
            // console.log("this is the next node connection ",current.next)
            current = current.next;
           
        }
    }


    // insert last node
    insertLast(data,){
        let node = new Node(data)
        let current;
        // if empty then make it head
        if(!this.head){
            this.head = node
        }else{
            current = this.head;
            while(current.next){
                current= current.next;
            }
            current.next = node;

        }
        this.size++;
    }


    // insert at index 
    insertAt(data,index){
        // if index is out of range
        if(index > 0 && index> this.size){
            return;
        }
        // if first index
        if(index === 0){
            this.insertFirst(data)
            return;
        }
        const node = new Node(data);
        let current,previous;
        current = this.head;
        let count = 0;
        while(count <index){
            previous = current; // the node before the index;
            count++;
            current = current.next; // node after the index
        }
        node.next = current;
        previous.next = node;
        this.size++;

    }


    getAt(index){
        let current = this.head;
        let count = 0;
        while(current){
            if(count == index){
                console.log("here is your data",current.data)
            }
            count++;
            current= current.next;
        }
    }


}


const tst = new LinkedList();

tst.insertFirst(100)
tst.insertFirst(200)
tst.insertFirst(300)
tst.insertLast(400)
// console.log(tst)

tst.insertAt(33,3)
tst.getAt(3)

tst.printlistData()





