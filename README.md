# DSW vs custom AVL transformation

This a comparison in the efficiency of balancing binary search trees. Two methods are compared, DSW, and an original custom method for transforming a binary search tree to a balanced AVL tree.

There are several methods to balance BSTs (binary search trees), but it is very important to choose the fastest, efficient method and especially the method which occupies the least space.
In this context, we will compare two methods: 

* DSW (Day–Stout–Warren algorithm) : This is an algorithm that takes a binary search tree as input in order to achieve its balancing.
* AVL transformation : This custom algorithm transforms a binary search tree into an AVL tree.

We will compare according to four criteria: the number of nodes visited, the number of rotations performed, the depth of the tree after balancing and the time taken for balancing :

1) The number of nodes visited:
The DSW will visit each node at most twice so in this side it is more efficient than the transformation to AVL in which the number of visited nodes increase after each rotation.

2) The number of rotations performed:
Transformation to AVL detects unbalanced nodes in order to balance them, then the number of rotations performed is the number of unbalanced nodes. As for DSW, it will first transform the tree to an ordered list, then it will perform rotations even on the balanced nodes which increases the number of rotations, then in this side the transformation to AVL is better.

3) The depth of the tree after balancing:
The goal of DSW is to create perfect trees (the difference between the levels of leaves does not exceed 1), then the maximum depth is log2(n) where n is the number of nodes, while the transformation to AVL aims to balance the nodes of the tree and do not take into account the final perfect shape of the tree, then the depth can exceed log2(n) (generally it is 1.44*log2(n)).


4) The time taken for balancing:
The DSW will perform two transformations: the first is from the tree to a list and the second is from a list to a balanced tree. As for the transformation to AVL, time will go up each time a rotation is performed, then if there are much rotations performed the time will increase too much compared to that of the DSW.


To conclude, the DSW is more efficient in: speed, number of nodes visited and the depth of the resulting tree, but it will completely change the structure of the tree (reconstruction), while the transformation to  AVL is more effective in the number of rotations performed and it will maintain the structure as it is by modifying only what requires a modification.


To see the statistics and comparison curves of these two methods, check the Excel.
