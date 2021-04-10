class Node {
    constructor(element) {
        this.data = element
    }
}

class LinkedList {
    constructor() {
        this.head = null
        this.size = 0
    }

    add(element) {
        const node = new Node(element)
        let current
        if (this.head == null) {
            this.head = node
        } else {
            current = this.head
            // console.log(current)
            while (current.next) {
                current = current.next
            }
            current.next = node
            this.size++
            // console.log(current)
        }
    }

    delete() {
        if (this.head == null) {
            console.log("Linked List is empty")
        } else {
            console.log(`Deleting ${this.head.data}`)
            this.head = this.head.next
        }
    }

    print() {
        let current = this.head
        while (current) {
            console.log(current.data)
            current = current.next
        }
    }
}

li = new LinkedList
li.add(3)
li.add(4)
li.add(5)
li.print()
li.delete()
li.print()
console.log(li)