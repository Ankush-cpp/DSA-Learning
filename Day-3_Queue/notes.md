# Time Needed to Buy Tickets (LC 2073)

## Approach
- Simulate the queue
- Each second:
  - Front person buys one ticket
  - If tickets remain, move back to queue
- Stop when person k finishes buying tickets

## Complexity
- Time: O(total tickets)
- Space: O(n)

## Key Learning
Queue is useful for round-robin style simulations.