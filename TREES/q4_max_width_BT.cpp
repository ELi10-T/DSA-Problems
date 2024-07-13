// Question : Maximum width of a binary tree (https://www.geeksforgeeks.org/maximum-width-of-a-binary-tree/)
// Solution: Use Level Order traversal
// Solution A : Use Recursion to get the max width
// Time & Space Complexity : O(N^2), O(1) (Not considering recursive stack O(N))
// Solution B : Use Queue to get the maximum width
// Time & Space Complexity : O(N), O(w), w -> width of the tree
// Solution C : Use one of the traversal techniques, and then find it
// Time & Space Complexity : O(N), O(h)

#include <bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int SolutionC(Tree *head)
{
    int height = HeightOfBT(head);
    int *width = new int[height + 1];

    SolutionCPostOrder(head, width, 0);

    int maxWidth = INT_MIN;

    for (int i = 0; i <= height; i++)
    {
        maxWidth = max(maxWidth, width[i]);
    }
    return maxWidth;
}

void SolutionCPostOrder(Tree *head, int *width, int level)
{
    if (head != NULL)
    {
        width[level]++;
        maxWidthBTSolutionC(head->left, *width, level + 1);
        maxWidthBTSolutionC(head->right, *width, level + 1);
    }
}

int HeightOfBT(Tree *head)
{
    if(head == NULL) {
        return 0;
    }

    int leftHeight = HeightOfBT(head->left);
    int rightHeight = HeightOfBT(head->right);

    return max(leftHeight, rightHeight)+1;
}

int main()
{
}