# Online Stock Span (LC 901)

## Approach
Solved using monotonic stack similar to Daily Temperatures.

- Store indices in stack
- Maintain previous greater element
- Span = current index - previous greater index

## Complexity
- Time: Amortized O(1)
- Space: O(n)

## Key Learning
Stock Span is closely related to:
- Next Greater Element
- Daily Temperatures
- Monotonic Stack patterns