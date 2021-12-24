##  Git 学习 ##

#### Git命令基本语法 

> `git [command]`
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224113123748.png" alt="image-20211224113123748" style="zoom:150%;" />
>
> ![image-20211223224520156](C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211223224520156.png)

### Git常见命令

> `git init`  本地仓库初始化
>
> `git status`  查看本地仓库状态
>
> `cd c/data`    `..`  
>
> `git help command_name` 打开help文档
>
> ctrl + ins   git 复制 

> `git log`  查看日志
>
> `git log --pretty=oneline` 单屏显示不下，单行显示日志
>
> `git log -- oneline` 同上
>
> `git reflog` 显示移动版本需要的步数（最好用）
>
> ![git reflog](C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20210920214316517.png)

> `git add filname`     :    添加未追踪即工作区的文件到暂存区
>
> `git rm --cached filename`    :    移除暂存区文件到工作区
>
> `git reset HEAD filename`  :
>
> `git commit -m "..." filename`  提交暂存区文件到本地仓库, " "是`log`
>
> `git commit -a`   :   直接冲突文件再次提交

> `git reset --hard hashvalue`  进行版本控制 基于索引值
>
> > 参数 ：soft mixed  hard   区别在于是否移动暂存区和工作区
> >
> > 可以用来恢复删除的文件： 前提是该文件提交到本地仓库
>
> `git diff filename`  将文件与暂存区比较  

> `git branch` branch_name   分支  :   同步推进各个功能的实现,实现热修复。
>
> ![image-20210922095615511](C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20210922095615511.png)  
>
> `git branch -v`  ： 查看当前分支    
>
> `git branch -l`  :   查看所有分支

> `git checkout branch_name`  :   切换分支
>
> `git checkout -b new_braanch_name`   ：  创建一个新分支并且切换
>
> `git chekcout HASH_value`  :   把HEAD 切换到该HASH值指向的地方   绝对引用
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000014707.png" alt="image-20211224000014707" style="zoom: 50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000025597.png" alt="image-20211224000025597" style="zoom: 50%;" />
>
> `git checkout main^`  ==   `git checkout main~1`    :   相对引用 
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000321231.png" alt="image-20211224000321231" style="zoom: 50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000411690.png" alt="image-20211224000411690" style="zoom: 50%;" />
>
> `git branch -f main HEAD~3 `  :   基于相对引用的强制移动
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000705121.png" alt="image-20211224000705121" style="zoom: 50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224000726441.png" alt="image-20211224000726441" style="zoom: 50%;" />

> `git reset HEAD^`  :   本地撤销 
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224001552725.png" alt="image-20211224001552725" style="zoom:50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224001606583.png" alt="image-20211224001606583" style="zoom:50%;" />
>
> `git revert HEAD`  :   远程分支撤销      (还不是很懂)
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224001803237.png" alt="image-20211224001803237" style="zoom:50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224001950517.png" alt="image-20211224001950517" style="zoom:50%;" />

>  `git merge bugFix`   :   合并分支(吸收分支)   
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211223233005477.png" alt="image-20211223233005477" style="zoom: 67%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211223233015385.png" alt="image-20211223233015385" style="zoom: 67%;" />
>
> `git rebase main` :
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211223235209735.png" alt="image-20211223235209735" style="zoom: 67%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211223235302115.png" alt="image-20211223235302115" style="zoom:67%;" />
>
> 合并出现冲突 ： 解决冲突（编辑文件，删除特殊符号） 再次进行提交 

### Git原理

> Hash 加密算法 ： SHA - 1，算法不可逆，可以用于校验文件。
>
> 分布式版本控制管理

### Github交互

> `git remote add origin Repositories-name`   远程库起别名
>
> `git remote -v`     查看远程库
>
> `git push Repopitiories-name branch_name`   推送本地仓库分支到远程库
>
> `git pull Repopitiories-name branch_name`   ==  fetch +  merge  拉取
>
> `git pull --rebase` 
>
> <img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224095215255.png" alt="image-20211224095215255" style="zoom:50%;" /><img src="C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211224095241584.png" alt="image-20211224095241584" style="zoom:50%;" />
>
> ![image-20210922151216124](C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20210922151216124.png)

> 跨团队协作： 申请`Fork`，然后`pull request`

**Git errot** :  Failed to connect to github.com port 443:connection timed out

原因： 修改默认端口后，端口冲突

解决方法： ``git config --global http.proxy http://127.0.0.1:7890` `git config --global http.proxy http://127.0.0.1:7890`  地址和端口号查看设置即可。

