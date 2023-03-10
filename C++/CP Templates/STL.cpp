/* List STL
front()	Returns the value of the first element in the list.
back()	Returns the value of the last element in the list.
push_front(g)	Adds a new element ‘g’ at the beginning of the list.
push_back(g) 	Adds a new element ‘g’ at the end of the list.
pop_front()	Removes the first element of the list, and reduces size of the list by 1.
pop_back()	Removes the last element of the list, and reduces size of the list by 1.
list::begin()	begin() function returns an iterator pointing to the first element of the list.
list::end()	end() function returns an iterator pointing to the theoretical last element which follows the last element.
list rbegin() and rend()	rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
list cbegin() and cend() 	 cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
list crbegin() and crend() 	crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
empty() 	Returns whether the list is empty(1) or not(0).
insert()	Inserts new elements in the list before the element at a specified position.
erase()	Removes a single element or a range of elements from the list.
assign()	Assigns new elements to list by replacing current elements and resizes the list.
remove()	Removes all the elements from the list, which are equal to given element.
list::remove_if()	Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
reverse()	Reverses the list.
size()	Returns the number of elements in the list.
list resize()	Used to resize a list container.
sort()	Sorts the list in increasing order.
list max_size() 	Returns the maximum number of elements a list container can hold.
list unique()	Removes all duplicate consecutive elements from the list.
list::emplace_front() and list::emplace_back()	emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
list::clear()	clear() function is used to remove all the elements of the list container, thus making it size 0.
list::operator=	This operator is used to assign new contents to the container by replacing the existing contents.
list::swap()	This function is used to swap the contents of one list with another list of same type and size.
list splice()	Used to transfer elements from one list to another.
list merge()	Merges two sorted lists into one.
list emplace()	Extends list by inserting new element at a given position.
*/

/* Vector STL
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/