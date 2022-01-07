## **矩阵乘法几何本质：**

第二个矩阵分解为多个列向量，每个列向量做第一个矩阵构成的线性变换，把变换后的向量拼接起来即可。

什么样的线性变换呢：第一个矩阵的列向量可以看做是把矩阵空间的基向量线性变换，如图中向量[ 3 , 1] , [ 1 ,  2 ]，组合生成新的向量，拼接向量即可。

![image-20220106201053266](https://s2.loli.net/2022/01/06/4LudiWFCMrvGZnS.png)

<img src="https://s2.loli.net/2022/01/06/qrNzFRWoTGexMip.png" alt="image-20220106201009176" style="zoom: 50%;" />

线性变换非方阵的情况： 输入空间和输出空间维度不一致，同理。  二维到三维：

<img src="https://s2.loli.net/2022/01/06/m7KAVrXHUafJuEC.png" alt="image-20220106205641726" style="zoom:67%;" />



## **矩阵的Rank : ** 

逻辑上判断Rank值：矩阵列向量可以张成的空间的维度

几何上判断Rank值：当一个列向量在其他列向量生成的平面内，Rank = n - 1；

`（Rank(A) = n）  ==    det(A) != 0`

<img src="C:/Users/pc/AppData/Roaming/Typora/typora-user-images/image-20220106205331301.png" alt="image-20220106205331301" style="zoom:50%;" />



## **向量点乘  dot product  :**

<img src="C:/Users/pc/AppData/Roaming/Typora/typora-user-images/image-20220106211343658.png" alt="image-20220106211343658" style="zoom:50%;" />

两个列向量点乘逻辑本质：具有对称性，一个向量转置成为线性变换矩阵把第二个向量压缩到一维。

几何本质：投影乘积不直观，对称。

算数形式：

<img src="C:/Users/pc/AppData/Roaming/Typora/typora-user-images/image-20220106211554738.png" alt="image-20220106211554738" style="zoom:50%;" />

计算机图形学意义：判断向量夹角是否大于90°



## **行列式 det :**   

只对行列数目相同的矩阵有意义，行列式的值有正有负，判断条件是是否满足右手螺旋定理。

二维：两个列向量组成的平行四边形的面积。

三维：三个列向量组成的平行六面体的体积。



## **向量叉乘  cross product  :**

几何本质：两个向量构成的行列式的大小 和 符合右手定则的方向

算数形式：

<img src="C:/Users/pc/AppData/Roaming/Typora/typora-user-images/image-20220106213335817.png" alt="image-20220106213335817" style="zoom: 25%;" />

计算机图形学意义：判断两个向量之间的相对方向。



## **基变换 :**

![image-20220106220035779](https://s2.loli.net/2022/01/06/Eaf9PYzBAw6GFsR.png)



## **特征值 特征向量 eigenvalue eigenvector :**

逻辑意义：线性变换前后的向量在同一方向上，大小可能改变。 该向量叫做此线性变换的特征向量，向量大小的变换叫做特征值。 特征向量一般为空间上一条直线上的所有向量。

算数形式：

 ![[公式]](https://www.zhihu.com/equation?tex=AX%3D\lambda+X\\)

线性变换`A`存在特征值为 1 的特征向量的几何意义是： 该线性变换是的其张成的空间沿着该特征向量进行旋转。



## **线性的严格定义 :**

![image-20220106223333165](C:/Users/pc/AppData/Roaming/Typora/typora-user-images/image-20220106223333165.png)

多项式求导积分也是线性变换。



## 【官方双语/合集】线性代数的本质 - 系列合集： 

## <img src="https://s2.loli.net/2022/01/07/eFcY4gG1qAWnESa.png" alt="image-20220107094422174"  />













