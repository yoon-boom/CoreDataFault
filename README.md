***Faulting is a mechanism Core Data employs to reduce your application’s memory usage. A related feature called uniquing ensures that, in a given managed object context, you never have more than one managed object to represent a given record.

Faulting Limits the Size of the Object Graph

Faulting reduces the amount of memory your application consumes. A fault is a placeholder object that represents a managed object that has not yet been fully realized, or a collection object that represents a relationship:

A managed object fault is an instance of the appropriate class, but its persistent variables are not yet initialized.
A relationship fault is a subclass of the collection class that represents the relationship.
Faulting allows Core Data to put boundaries on the object graph. Because a fault is not realized, a managed object fault consumes less memory, and managed objects related to a fault are not required to be represented in memory at all.
