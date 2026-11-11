# Count number of leaf nodes

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP01/problems/DSCPP86)

## Solved On
11 Nov 2026 at 05:41 pm

<p>Given a tree, find the number of leaf nodes using DFS algorithm.</p>

<p>Write the algorithm forming an adjacency list yourself. In the end, output the number of leaf nodes in the tree.</p>

<p><strong>Note:</strong> Leaf nodes are the nodes which do not have any children. You will need to modify your DFS code to count when you encounter a leaf node.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of test case contains a single integer <code>N</code>, denoting the number of nodes in the tree (the nodes lie in range <code>[0, N - 1]</code>).</p>
<p>The next <code>N - 1</code> lines contain two integers <code>a</code> and <code>b</code> denoting there is an edge from node <code>a</code> to node <code>b</code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output a single integer denoting the number of leaves in the given tree.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
8
0 1
0 2
1 3
1 4
2 5
3 6
5 7
<strong>Output:</strong>
3
</pre>

<p><strong>Explanation:</strong></p>
<p>Try to draw the tree on a paper using this testcase.<br />
The leaf nodes are <code>4</code>, <code>6</code> and <code>7</code>.</p>

## My Notes / Approach:
Difficulty: 1250 or 1-star