1.
b - the memory was range was promised but the pointer to the beginnning of the process hasnt been determined?

2. 
5 states:

start - the initial state when created

ready - its ready have a process allocated to them so they can compute

running - when the process gets a processor or cpu time and its instructions are executed

waiting - when the process needs an external resource, such as key board or mouse click

terminated / exit - when process is done computhing, waits to be removed from memory

3. 

<!-- Average time it takes to make a write system call is 1637.515991 ns.
Average time it takes to make a printf is 3940.093018 ns.

so printf takes 1.3 ms LONGER -->

Average time it takes to make a system call is 10687.010742 ns.
Average time it takes to make a printf is 9456.040039 ns.

so it took write 1.2 ms longer

4.

my guess is somewhere along the way printf has a more controlled way of handling where the input is being written and read from in memory when interfacing with the console printing