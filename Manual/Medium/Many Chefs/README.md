# Many Chefs

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/problems/MANYCHEF)

## Solved On
31 Oct 2026 at 09:28 am

<p>Chef Ciel wants to put a fancy neon signboard over the entrance of her restaurant. She has not enough money to buy the new one so she bought some old neon signboard through the internet. Ciel was quite disappointed when she received her order - some of its letters were broken. But she realized that this is even better - she could replace each broken letter by any letter she wants. So she decided to do such a replacement that the resulting signboard will contain the word <code>"CHEF"</code> as many times as possible.</p>

<p>We can model the signboard as a string <code>S</code> having capital letters from <code>'A'</code> to <code>'Z'</code>, inclusive, and question marks <code>'?'</code>. Letters in the string indicate the intact letters at the signboard, while question marks indicate broken letters. So Ciel will replace each question mark with some capital letter and her goal is to get the string that contains as many substrings equal to <code>"CHEF"</code> as possible. If there exist several such strings, she will choose the lexicographically smallest one.</p>

<p><strong>Note 1:</strong> The string <code>S = S<sub>1</sub>...S<sub>N</sub></code> has the substring <code>"CHEF"</code> if for some <code>i</code> we have <code>S<sub>i</sub>S<sub>i+1</sub>S<sub>i+2</sub>S<sub>i+3</sub> = "CHEF"</code>. The number of times <code>"CHEF"</code> is the substring of <code>S</code> is the number of those <code>i</code> for which <code>S<sub>i</sub>S<sub>i+1</sub>S<sub>i+2</sub>S<sub>i+3</sub> = "CHEF"</code>.</p>

<p><strong>Note 2:</strong> The string <code>A = A<sub>1</sub>...A<sub>N</sub></code> is called lexicographically smaller than the string <code>B = B<sub>1</sub>...B<sub>N</sub></code> if there exists <code>K</code> from <code>1</code> to <code>N</code>, inclusive, such that <code>A<sub>i</sub> = B<sub>i</sub></code> for <code>i = 1, ..., K-1</code>, and <code>A<sub>K</sub> < B<sub>K</sub></code>. In particular, <code>A</code> is lexicographically smaller than <code>B</code> if <code>A<sub>1</sub> < B<sub>1</sub></code>. We compare capital letters by their positions in the English alphabet. So <code>'A'</code> is the smallest letter, <code>'B'</code> is the second smallest letter, ..., <code>'Z'</code> is the largest letter.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains an integer <code>T</code> denoting the number of test cases. The description of <code>T</code> test cases follows. The only line of each test case contains a string <code>S</code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>For each test case, output a single line containing the content of the signboard Chef Ciel will come up with. That is you should output the lexicographically smallest string that could be obtained from the input string by replacing all its question marks by some capital letters and having as many substrings equal to <code>"CHEF"</code> as possible.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
5
????CIELIS???E?
????CIELISOUR???F
T?KEITE?SY
????????
???C???
<strong>Output:</strong>
CHEFCIELISACHEF
CHEFCIELISOURCHEF
TAKEITEASY
CHEFCHEF
AAACHEF
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Example Case 1:</strong> Here the resulting string can have at most 2 substrings equal to <code>"CHEF"</code>. For example, some possible such strings are:</p>
<ul>
	<li><code>CHEFCIELISACHEF</code></li>
	<li><code>CHEFCIELISQCHEF</code></li>
	<li><code>CHEFCIELISZCHEF</code></li>
</ul>
<p>However, the lexicographically smallest one is the first one.</p>
<p><strong>Example Case 3:</strong> Here the resulting string cannot have <code>"CHEF"</code> as its substring. Therefore, you must simply output the lexicographically smallest string that can be obtained from the given one by replacing question marks with capital letters.</p>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= T <= 2013</code></li>
	<li><code>1 <= length of S <= 2013</code></li>
	<li>Each character in <code>S</code> is either a capital letter from <code>'A'</code> to <code>'Z'</code>, inclusive, or the question mark <code>'?'</code></li>
</ul>

## My Notes / Approach:
difficulty - 1740 or 3-star