# Tree Path Sum

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP02/problems/TREEPATHSUM)

## Solved On
14 Nov 2026 at 08:12 am

<p>Given an undirected connected tree with <code>N</code> nodes, numbered from <code>1</code> to <code>N</code>, and rooted at node <code>1</code>, along with an integer <code>target_sum</code>.</p>

<p>Check if there exists a path from root to any leaf whose sum is equal to <code>target_sum</code>. Path sum is the addition of the values of nodes which are in that particular path.</p>

<p>For example, if <code>target_sum</code> is <code>9</code>, then in the following tree, there is a path <code>1 -> 2 -> 6</code> whose sum is <code>9</code>.</p>

<p> </p>
<p><strong>Function Declaration</strong></p>
<p><strong>Function Name:</strong> <code>solution</code> — This function determines whether there exists a root-to-leaf path in the given tree such that the sum of node values along that path equals <code>target_sum</code>.</p>

<p><strong>Parameters:</strong></p>
<ul>
	<li><code>n</code>: The number of nodes in the tree (nodes are numbered from <code>1</code> to <code>n</code>).</li>
	<li><code>target_sum</code>: The required sum of a valid root-to-leaf path.</li>
	<li><code>adj</code>: An adjacency list representing the tree.
		<ul>
			<li><code>adj[i]</code> contains the list of nodes directly connected to node <code>i</code>.</li>
			<li>The tree is undirected and rooted at node <code>1</code>.</li>
		</ul>
	</li>
</ul>

<p><strong>Return Value:</strong></p>
<ul>
	<li>Returns <code>true</code> if there exists at least one path from the root (node <code>1</code>) to any leaf such that the sum of node values in that path equals <code>target_sum</code>.</li>
	<li>Returns <code>false</code> otherwise.</li>
</ul>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains two space-separated integers <code>N</code> and <code>target_sum</code> — the number of vertices and the target sum which needs to be checked.</p>
<p>The next <code>N - 1</code> lines describe the edges. The <code>i<sup>th</sup></code> of these <code>N - 1</code> lines contains two space-separated integers <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>, denoting a bidirectional edge between <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output <code>YES</code> if the tree has a root-to-leaf path sum equal to the given <code>target_sum</code> or <code>NO</code> otherwise.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
7 9
1 2
1 4
2 5
2 3
2 6
4 7
<strong>Output:</strong>
YES
</pre>

<p><strong>Explanation:</strong></p>
<p>Refer to the image provided above for explanations of this sample test.</p>

<p> </p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
6 4
1 2
1 3
2 4
2 6
3 5
<strong>Output:</strong>
NO
</pre>

<p><strong>Explanation:</strong></p>
<p>There is no path that can achieve this target sum.</p>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li><code>1 <= u<sub>i</sub>, v<sub>i</sub> <= N</code></li>
	<li><code>1 <= target_sum <= N * (N + 1) / 2</code></li>
</ul>

## My Notes / Approach:
Difficulty:  1450 or 2-star