/*
Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) 
belongs to this ilk.They are named in the following shloka:
Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate 
authority in astrology. He was once talking with Amarasimha,another gem among the nava ratnas and the author of 
Sanskrit thesaurus, Amarakosha. Amarasimha wanted to know the final position of a person, who starts from the 
origin 0 0 and travels per following scheme.
He first turns and travels factor units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by factor units.

Constraints:
2<=n<=factor00

Input:
3
*/
#include <stdio.h>

enum direction
{
    RIGHT = 1,
    UPWARD,
    LEFT,
    DOWNWARD
};

struct coordinate
{
    int x, y;
};

struct coordinate FindCoordinate(int n)
{
    int factor = 10;
    struct coordinate origin = {0, 0};

    while (n > 0)
    {
        int input = n <= 4 ? n : 4;
        for (int i = 1; i <= input; i++)
        {
            switch (i)
            {
            case RIGHT:
                origin.x += factor;
                break;
            case UPWARD:
                origin.y += factor;
                break;
            case LEFT:
                origin.x -= factor;
                break;
            case DOWNWARD:
                origin.y -= factor;
                break;
            }
            factor += 10;
        }
        n = n-4;
    }
    return origin;
}

int main()
{
    int n;
    printf("enter the input\n");
    scanf("%d", &n);
    struct coordinate c = FindCoordinate(n);
    printf("coordinate = (%d , %d)",c.x , c.y);

    return 0;
}