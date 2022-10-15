class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class Stack {
    constructor(value) {
        this.top = null;
        this.size = 0;
    }

    push(val) {
        const newNode = new Node(val);
        if(!this.top){
            this.top = newNode;
        } else {
            const temp = this.top;
            this.top = newNode;
            this.top.next = temp;
        }
        this.size++;
    }

    pop() {
        if(this.size<=0) return null;
        else{
            const node = this.top;
            this.top = this.top.next;
            this.size--;
            return node;
        }
    }
}


const stk = new Stack();

stk.push("one");
stk.push("two");
stk.push("three");
stk.push("four");

console.log(stk.pop());

console.log(stk);