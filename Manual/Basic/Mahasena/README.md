# Mahasena

## Difficulty: Basic

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A)

## Solved On
12 Oct 2026 at 04:40 am

<p>Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him (as army-chief), and the reason for that was their really powerful army, also called as Mahasena.</p>

<p>Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.</p>

<p>Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY".</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of input consists of a single integer <code>N</code> denoting the number of soldiers. The second line of input consists of <code>N</code> space separated integers <code>A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub></code>, where <code>A<sub>i</sub></code> denotes the number of weapons that the <code>i<sup>th</sup></code> soldier is holding.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>Generate one line output saying <code>"READY FOR BATTLE"</code>, if the army satisfies the conditions that Kattapa requires or <code>"NOT READY"</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
1
1
<strong>Output:</strong>
NOT READY
</pre>

<p><strong>Explanation:</strong></p>
<p>For the first example, <code>N = 1</code> and the array <code>A = [1]</code>. There is only 1 soldier and he is holding 1 weapon, which is odd. The number of soldiers holding an even number of weapons = 0, and number of soldiers holding an odd number of weapons = 1. Hence, the answer is <code>"NOT READY"</code> since the number of soldiers holding an even number of weapons is not greater than the number of soldiers holding an odd number of weapons.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
1
2
<strong>Output:</strong>
READY FOR BATTLE
</pre>

<p><strong>Explanation:</strong></p>
<p>For the second example, <code>N = 1</code> and the array <code>A = [2]</code>. There is only 1 soldier and he is holding 2 weapons, which is even. The number of soldiers holding an even number of weapons = 1, and number of soldiers holding an odd number of weapons = 0. Hence, the answer is <code>"READY FOR BATTLE"</code> since the number of soldiers holding an even number of weapons is greater than the number of soldiers holding an odd number of weapons.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong>
4
11 12 13 14
<strong>Output:</strong>
NOT READY
</pre>

<p><strong>Explanation:</strong></p>
<p>For the third example, <code>N = 4</code> and the array <code>A = [11, 12, 13, 14]</code>. The 1st soldier is holding 11 weapons (which is odd), the 2nd soldier is holding 12 weapons (which is even), the 3rd soldier is holding 13 weapons (which is odd), and the 4th soldier is holding 14 weapons (which is even). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 2. Notice that we have an equal number of people holding even number of weapons and odd number of weapons. The answer here is <code>"NOT READY"</code> since the number of soldiers holding an even number of weapons is not strictly greater than the number of soldiers holding an odd number of weapons.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 4:</strong></p>

<pre>
<strong>Input:</strong>
3
2 3 4
<strong>Output:</strong>
READY FOR BATTLE
</pre>

<p><strong>Explanation:</strong></p>
<p>For the fourth example, <code>N = 3</code> and the array <code>A = [2, 3, 4]</code>. The 1st soldier is holding 2 weapons (which is even), the 2nd soldier is holding 3 weapons (which is odd), and the 3rd soldier is holding 4 weapons (which is even). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 1. Hence, the answer is <code>"READY FOR BATTLE"</code> since the number of soldiers holding an even number of weapons is greater than the number of soldiers holding an odd number of weapons.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 5:</strong></p>

<pre>
<strong>Input:</strong>
5
1 2 3 4 5
<strong>Output:</strong>
NOT READY
</pre>

<p><strong>Explanation:</strong></p>
<p>For the fifth example, <code>N = 5</code> and the array <code>A = [1, 2, 3, 4, 5]</code>. The 1st soldier is holding 1 weapon (which is odd), the 2nd soldier is holding 2 weapons (which is even), the 3rd soldier is holding 3 weapons (which is odd), the 4th soldier is holding 4 weapons (which is even), and the 5th soldier is holding 5 weapons (which is odd). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 3. Hence, the answer is <code>"NOT READY"</code> since the number of soldiers holding an even number of weapons is not greater than the number of soldiers holding an odd number of weapons.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 100</code></li>
	<li><code>1 &lt;= A<sub>i</sub> &lt;= 100</code></li>
</ul>

## My Notes / Approach:
difficluty - 533