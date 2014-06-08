Nginx学习笔记
==============


学习计划
=============

**调研**: 
1. 首先是学习Emiller写的著名的Nginx Module开发指南, 他将nginx比喻为蝙蝠侠, 专门解决多余的CPU cycles和memory leaks从而避免服务器过载. nginx的**module chain**机制就是蝙蝠侠的security utility belt. 本文让我们了解module chain, 从而成为Lucius Fox这样的engineer.   
2. 看到nginx-discovery这个网站, 讲述了他51天的nginx日志生活. 涉及了他阅读的相关资料以及心得, 高屋建瓴而不拘泥于细节确实很棒. 他提到了一个哲学: nginx是一个engine(它的发音也很像), 你可以使用nginx/C开发一个模块. 当然由于一个web有成百上千的feature, 使用C是不太现实的, 所以nginx只将那些对性能要求极高的模块开发为module. **nginx的核心是可扩展的模块开发**.

- [ ] High Level Understanding


High Level Understaning
========================

Nginx Module Chain
----------------------

Nginx Module Chain的基本逻辑如下, 翻译自Emiller

> Nginx采用了去中心化的软件架构, 真正完成每个工作的是各个Module(模块), 例如读写html由某个handler模块完成, 代理请求由upstream模块, gzip压缩html返回由filter模块完成.Nginx核心模块则处理网络请求,应用协议以及模块请求顺序. 此外, 如果一个请求是reverse proxy, 在reverse之前会有一个load-balancer模块来实现负载聚能. filter采取的是"责任链设计模式"和pipeline模式, filters执行顺序由编译时决定, filter处理数据采取buffer stream的形式, filter每次以buffer(通常是4k??4096??)而不是整个html body为基本操作单位.


#### Nginx Module能力

Module的调用过程可以十分定制化. 能力越大, 责任也越大, 直接摘抄Emiller的Module回调函数集合, 我现在可能只用过handling a request和filtering response header

* Just before the server reads the config file
* For every configuration directive for the location and server for which it appears;
* When Nginx initializes the main configuration
* When Nginx initializes the server (i.e., host/port) configuration
* When Nginx merges the server configuration with the main configuration
* When Nginx initializes the location configuration
* When Nginx merges the location configuration with its parent server configuration
* When Nginx's master process starts
* When a new worker process starts
* When a worker process exits
* When the master exits
* Handling a request
* Filtering response headers
* Filtering the response body
* Picking a backend server
* Initiating a request to a backend server
* Re-initiating a request to a backend server
* Processing the response from a backend server
* Finishing an interaction with a backend server


异步
--------------


参考资料
================

* [Emiller's Guide To Nginx Module Development](http://www.evanmiller.org/nginx-modules-guide.html)
* [nginx-discovery](http://www.nginx-discovery.com/)



打卡记录
================

- [X] Day 1: 2014-06-07 Reading Day -- High Level Understanding
- [X] Day 2: 2014-06-08 Reading Day -- More Emiller
