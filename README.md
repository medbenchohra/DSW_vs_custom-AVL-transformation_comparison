# DSW_vs_custom-AVL-transformation_comparison
This a comparison in the efficiency of balancing binary search trees. Two methods are compared, DSW, and an original custom method for transforming a binary search tree to a balanced AVL tree.

There are several methods to balance BSTs (binary search trees), but it is very important to choose the fastest, efficient method and especially the method which occupies the least space.
In this context, we will compare two methods: DSW (this is an algorithm that takes a binary search tree as input in order to achieve its balancing) and the algorithm for transforming a binary search tree into an AVL tree.
     We will compare according to four criteria: the number of nodes visited, the number of rotations performed, the depth of the tree after balancing and the time taken for balancing.

1) The number of nodes visited:
The DSW will visit each node at most twice so in this side it is more efficient than the transformation to the AVL in which the number of visited nodes increase after each rotation.

2) The number of rotations performed:
Transformation to AVL detects unbalanced nodes in order to balance them, then the number of rotations performed is the number of unbalanced nodes, but for DSW, it will first make the tree an ordered list, then it will perform rotations even on the balanced nodes which increases the number of rotations, then in this side the transformation towards AVL is better.

3) The depth of the shaft after balancing:
The goal of DSW is to create perfect trees (the difference between the levels of leaves does not exceed 1), then the maximum depth is log2 (n) where n is the number of nodes, while the transformation to AVL has aim to balance the nodes of the tree and do not take into account the final perfect shape of the tree, then the depth can exceed log2 (n) (generally it is 1.44 * log2 (n)).


4) The time taken for balancing:
The DSW will perform two transformations: the first is from the tree to a list and the other is from a list to a well balanced tree, so the time taken by this operation is less than a second, but since the transformation towards the AVL will go up each time a rotation is performed, then the time will increase too much compared to that of the DSW.


To conclude, the DSW is more efficient in the sides: speed, number of nodes visited and the depth of the resulting tree, but it will completely change the structure of the tree (reconstruction), while the transformation to the AVL is more effective in the side of the number of rotations performed because it will maintain the structure as it is by modifying only what requires a modification.


To see the statistics and comparison curves of these two methods, click on the following link (while maintaining CTRL)
