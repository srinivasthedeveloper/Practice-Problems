class Node {
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class Queue {
    constructor() {
        this.first = null;
        this.last = null;
        this.size = 0;
    }

    enqueue(val){
        const newNode = new Node(val);
        if(!this.first){
            this.first = newNode;
            this.last = newNode;
        } else {
            this.last.next = newNode;
            this.last = newNode;
        }
        this.size++;
    }

    dequeue() {
        if(!this.first) return null;
        const node = this.first;
        this.first = this.first.next;
        this.size--;
        return node;
    }
}

const queue = new Queue();

queue.enqueue("one");
queue.enqueue("two");
queue.enqueue("three");
queue.enqueue("four");

console.log(queue.dequeue());

console.log(queue);