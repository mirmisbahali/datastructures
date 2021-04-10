class Node {
    constructor(element) {
        this.data = element
        this.next = null
    }
}

class Stack {
    constructor() {
        this.head = null
        this.size = 0
    }

    push(el) {
        const node = new Node(el)
        if (this.head == null) {
            this.head = node
        } else {
            node.next = this.head
            this.head = node
        }
    }

    pop() {
        const temp = this.head
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

const li = new Stack()

for (let i = 1; i <=10; i++) {
    li.push(i)
}

// console.log(li)
li.print()

console.log("=================After Deleting an Element from stack================================")
li.pop()
li.print()