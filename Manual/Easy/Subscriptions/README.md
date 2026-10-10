# Subscriptions

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_)

## Solved On
10 Oct 2026 at 07:21 am

<p>A new TV streaming service was recently started in Chefland called the Chef-TV.</p>

<p>A group of <code>N</code> friends in Chefland want to buy Chef-TV subscriptions. We know that <code>6</code> people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is <code>X</code> rupees. Determine the minimum total cost that the group of <code>N</code> friends will incur so that everyone in the group is able to use Chef-TV.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line contains a single integer <code>T</code> — the number of test cases. Then the test cases follow.</p>
<p>The first and only line of each test case contains two integers <code>N</code> and <code>X</code> — the size of the group of friends and the cost of one subscription.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
1 100
12 250
16 135
<strong>Output:</strong>
100
500
405
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> There is only one person in the group. Therefore he will have to buy <code>1</code> subscription. Therefore the total cost incurred is <code>100</code>.</p>
<p><strong>Test case 2:</strong> There are <code>12</code> people in the group. Therefore they will have to buy <code>2</code> subscriptions. Therefore the total cost incurred is <code>500</code>.</p>
<p><strong>Test case 3:</strong> There are <code>16</code> people in the group. Therefore they will have to buy <code>3</code> subscriptions. Therefore the total cost incurred is <code>405</code>.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 1000</code></li>
	<li><code>1 &lt;= N &lt;= 100</code></li>
	<li><code>1 &lt;= X &lt;= 1000</code></li>
</ul>

## My Notes / Approach:
