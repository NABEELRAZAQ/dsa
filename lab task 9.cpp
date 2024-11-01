LabTask09 DSA
class Queue:
 def __init__(self, capacity):
 """Initialize the queue with a maximum capacity."""
 self.capacity = capacity
 self.queue = [] # List to store the queue elements
 def is_full(self):
 """Check if the queue is full."""
 return len(self.queue) >= self.capacity
 def is_empty(self):
 """Check if the queue is empty."""
 return len(self.queue) == 0
 def enqueue(self, item):
 """Add an item to the end of the queue."""
 if self.is_full():
 raise OverflowError("Queue is full. Cannot enqueue.")
 self.queue.append(item) # Add item to the end of the list
 def dequeue(self):
 """Remove and return the item at the front of the queue."""
 if self.is_empty():
 raise IndexError("Queue is empty. Cannot dequeue.")
 return self.queue.pop(0) # Remove the first item
 def count(self):
 """Return the number of items in the queue."""
 return len(self.queue)
 def clear(self):
 """Remove all items from the queue."""
 self.queue.clear() # Clear the list
 def __str__(self):
 """Return a string representation of the queue."""
 return str(self.queue)
# Example usage
if __name__ == "__main__":
 q = Queue(3) # Create a queue with a capacity of 3
 # Enqueue elements
 try:
 q.enqueue(1)
 q.enqueue(2)
 q.enqueue(3)
 print(q) # Output: [1, 2, 3]
 print("Count:", q.count()) # Output: Count: 3
 # Attempt to enqueue when full
 q.enqueue(4) # This will raise an OverflowError
 except OverflowError as e:
 print(e)
 # Dequeue an element
 print("Dequeued:", q.dequeue()) # Output: Dequeued: 1
 print(q) # Output: [2, 3]
 # Clear the queue
 q.clear()
 print(q) # Output: []
 print("Count after clear:", q.count()) # Output: Count after clear: 0
