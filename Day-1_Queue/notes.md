# Implement Stack using Queues (LC 225)

## Approach
- Use one queue
- After push:
  - Rotate previous elements

## Logic
Latest element always stays at front.

## Complexity
- Push: O(n)
- Pop: O(1)

## Key Learning
Queue rotation can simulate stack behavior.