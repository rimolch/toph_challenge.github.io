# A summmary:

# User calls printfcomma with an integer, the special case of negative numbers is handled by simply printing "-" and making the number #positive (this is the bit that won't work with INT_MIN).

# When you enter printfcomma, a number less than 1,000 will just print and return.

# Otherwise the recursion will be called on the next level up (so 1,234,567 will be called with 1,234, then 1) until a number less than 1,000 is found.

# Then that number will be printed and we'll walk back up the recursion tree, printing a comma and the next number as we go.
# SAMPLE TASK
![New Doc 2021-04-17 12 29 28_1](https://user-images.githubusercontent.com/67545874/115104240-e31aac00-9f78-11eb-8af1-e6db6683c119.jpg)











<a href ="https://toph.co/submissions/filter?author=605b180b19dac839fcd1f417">Click here</a>
# For more details ?
 <a href = "https://stackoverflow.com/questions/1449805/how-to-format-a-number-from-1123456789-to-1-123-456-789-in-c">Stack overflow</a>
