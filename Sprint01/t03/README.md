# Vampire Rabbits

### LEGEND
This time, traveller, you will work on rabbit ranch.
But beware of those vampire rabbits!

![Usage](.local/vamprab.gif)

### DESCRIPTION

Create a program that simulates a rabbit ranch:
* the program starts with 10 rabbits
* every rabbit is created with a random gender. 50% chance of male or female gender
creation
* there is a 1% random chance of vampire rabbit creation
* each turn lasts for 1 second
* each turn the rabbits' age increments for 1 year
* vampire rabbits do not take part in reproduction
* each turn one male and one female rabbit produce one new rabbit (i.e. if there are 7
males and 3 females, they produce 3 new bunnies).
* if the vampire rabbit was born then each turn it will change exactly one non-vampire
rabbit into a vampire
* after each turn the program prints to the standard output how many rabbits of each
type/gender there are. See CONSOLE OUTPUT
* if the rabbit becomes older than 3 years old, it dies
* if a vampire rabbit becomes older than 8 years old, it dies
* when all the rabbits have died - the program terminates
* if the overall population exceeds 1000 - the program terminates

Use `std::list`.

### Received knowledge
1. [std::list](https://en.cppreference.com/w/cpp/container/list)

### How to Build?
```bash
 cmake . -B build && cmake --build ./build
 ```

### Usage
![Usage](.local/usage.svg)