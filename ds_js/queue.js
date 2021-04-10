class Node {
    constructor(element) {
        this.data = element
        this.next = null
    }
}

class Queue {
    constructor() {
        this.head = null
        this.tail = null
        this.size = 0
    }

    enqueue(el) {
        const node = new Node(el)
        if (this.head == null) {
            this.head = node
            this.tail = node
        } else {
            this.tail.next = node
            this.tail = node
        }
    }

    dequeue() {
        let temp = this.head
        this.head = temp.next
    }

    print() {
        let temp = this.head
        while(temp) {
            console.log(temp.data)
            temp = temp.next
        }
    }
}

const li = new Queue()

for (let i = 1; i <= 5; i++) {
    li.enqueue(i)
}

li.print()

console.log("=================After Dequeueing 1 el ================")
li.dequeue()
li.print()