/*
  Ok, In am much happier with the code that I have here than my previous leet code solution. First of all I didn't have to 
  use a string for this problem. I know I could have just used a string, or stream operator, or even a stack. However, I 
  saw that this was the harder way so I did it. However, this code is only beats ~75% in runtime and ~50% in memory allocation.
  There is still improvement to be made.
*/

class Solution {
public:
    bool isPalindrome(int x)
    {
        int left = 10, right = 10;

        if (x < 0)
            return false;
        else if (x < 10)
            return true;
        else
        {
            while ((x / left) > 9)
            {
                left *= 10;
            }

            while (left >= right)
            {
                if (((x / left) % 10) != ((x % right) / (right / 10)))
                    return false;

                left /= 10;
                right *= 10;
            }
        }

        return true;
    }
};
