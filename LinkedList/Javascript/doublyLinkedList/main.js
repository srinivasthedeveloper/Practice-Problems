class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLinkedList {
    constructor(){
        this.first = null;
        this.last = null;
        this.size = 0;
    }
    
    append(value){
        const newNode = new Node(value);
        if(!this.first){
            this.first = newNode;
            this.last = newNode;
        } else {
            let temp = newNode;
            temp.prev = this.last;
            this.last.next = temp;
            this.last = temp;
        }
        this.size++;
    }

    prepend(value){
        const newNode = new Node(value);
        if(!this.first){
            this.first = newNode;
            this.last = newNode;
        } else {
            let temp = newNode;
            this.first.prev = temp;
            temp.next = this.first;
            this.first = temp;
        }
        this.size++;
    }

    get(index) {
        if(index<=0 || index>this.size) return null;
        else {
            let node = this.first;
            for(let i=1;i<index;i++){
                node = node.next;
            }
            return node;
        }
    }
    
    insert(ind,val) {
        let prevNode = this.get(ind-1);
        if(prevNode){
            let nextNode = prevNode.next;
            let node = new Node(val);
            node.prev = prevNode;
            prevNode.next = node;
            node.next = nextNode;
            nextNode.prev = node;
            this.size++;
        }
    }
}

const list = new DoublyLinkedList();

list.append("four");
list.prepend("one");
list.insert(2,"three");
list.insert(2,"two");

console.log(list);