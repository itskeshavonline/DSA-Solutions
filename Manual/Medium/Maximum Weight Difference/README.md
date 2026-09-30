# Maximum Weight Difference

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/MAXDIFF)

## Solved On
30 Sept 2026 at 04:23 pm

<p>Chef has gone shopping with his 5-year old son. They have bought <code>N</code> items so far. The items are numbered from <code>1</code> to <code>N</code>, and the item <code>i</code> weighs <code>W<sub>i</sub></code> grams.</p>

<p>Chef's son insists on helping his father in carrying the items. He wants his dad to give him a few items. Chef does not want to burden his son. But he won't stop bothering him unless he is given a few items to carry. So Chef decides to give him some items. Obviously, Chef wants to give the kid less weight to carry.</p>

<p>However, his son is a smart kid. To avoid being given the bare minimum weight to carry, he suggests that the items are split into two groups, and one group contains exactly <code>K</code> items. Then Chef will carry the heavier group, and his son will carry the other group.</p>

<p>Help the Chef in deciding which items should the son take. Your task will be simple. Tell the Chef the maximum possible difference between the weight carried by him and the weight carried by the kid.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of input contains an integer <code>T</code>, denoting the number of test cases. Then <code>T</code> test cases follow. The first line of each test contains two space-separated integers <code>N</code> and <code>K</code>. The next line contains <code>N</code> space-separated integers <code>W<sub>1</sub>, W<sub>2</sub>, ..., W<sub>N</sub></code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output the maximum possible difference between the weights carried by both in grams.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
<strong>Output:</strong>
17
2
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Case #1:</strong> The optimal way is that Chef gives his son <code>K = 2</code> items with weights <code>2</code> and <code>4</code>. Chef carries the rest of the items himself. Thus the difference is: <code>(8 + 5 + 10) - (4 + 2) = 23 - 6 = 17</code>.</p>
<p><strong>Case #2:</strong> Chef gives his son <code>3</code> items and he carries <code>5</code> items himself.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>1 &lt;= K &lt; N &lt;= 100</code></li>
	<li><code>1 &lt;= W<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
</ul>

## My Notes / Approach:
time complexity O(n log n)

greedy approach
