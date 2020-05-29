# 11. 합집합 찾기 (Union Find)

* 합집합 찾기라는 의미를 가진 **Union find** 알고리즘은, 대표적인 **그래프 알고리즘** 중 하나이다.
* 서로 같은 집합이 아닌 서로소 집합(disjoint-set)을 찾는 알고리즘이라고도 부른다.
* 여러 노드가 존재할 때 두 노드를 선택해서, **서로 같은 그래프에 속하는지 판별하는 알고리즘**이다.
* 나중에 강결합 컴포넌트(Strongly connected component) 라는 고급 알고리즘 등에서도 사용되는 개념이다.

<br/>

![img](https://postfiles.pstatic.net/MjAxODAzMTdfMTg4/MDAxNTIxMjY4NzgzMzA3.7GYrITyH43vDNEQyjobvZPnSZSxQrj80_SNf3Z1ma2Qg.jC6SGqtm9TcCi6gfXliOS5_Z-unifcv1jyVNE-zviwEg.PNG.ndb796/image.png?type=w773)

* 위와 같이 여러 노드가 서로 자유분방하게 존재한다고 가정한다.
* 즉, 다시 말해 모든 값이 자기 자신만을 집합의 원소로 가지고 있을 때를 말한다.

<br/>

|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |
|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |

* 첫 행은 노드 번호를 의미
* 두 번째 행은 부모 노드 번호를 의미
* 처음에는 자기 자신만을 가리키고 있는 상태

<br/>

![img](https://postfiles.pstatic.net/MjAxODAzMTdfMTA1/MDAxNTIxMjY4ODEyMjQx.TtUYeJZUCi6P6Ujw--Rl30ZxZXX1n1ClTdkJZaMxFbAg.bpaiiYnA_QKetNd_-tPJ8TbthlTyouqzvrdamGlWkWAg.PNG.ndb796/image.png?type=w773)

* 이 때 1과 2가 연결되었다고 가정하자.
* 이러한 연결을 프로그래밍 언어로 어떻게 표현할 수 있을까? 하는 내용이 바로 Union-Find 라고 할 수 있다.

<br/>

|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |
|  1   |  1   |  3   |  4   |  5   |  6   |  7   |  8   |

* 2번째 노드의 부모 노드를 1로 설정하여 부모를 합친다.
* 일반적으로 부모를 합칠 때는 일반적으로 더 작은 값 쪽으로 합친다.
* 이것을 **합침(Union)**이라고 한다.

<br/>



<br/>

<br/>

<br/>

<br/>

<br/>

<br/>

### Source Code

```c

```

<br/>

## 

* 

<br/>

[모든 자료 및 사진 출처](https://blog.naver.com/PostView.nhn?blogId=ndb796&logNo=221230967614&parentCategoryNo=&categoryNo=&viewDate=&isShowPopularPosts=false&from=postView)