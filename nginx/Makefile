.PHONY: all install clean

all:
	cd /home/qingfeng/learning/nginx/nginx/build/LuaJIT-2.1-20140109 && $(MAKE) TARGET_STRIP=@: CCDEBUG=-g PREFIX=/usr/local/openresty/luajit
	cd /home/qingfeng/learning/nginx/nginx/build/lua-cjson-1.0.3 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/lua-redis-parser-0.10 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/lua-rds-parser-0.05 && $(MAKE) DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/nginx-1.5.8 && $(MAKE)

install: all
	cd /home/qingfeng/learning/nginx/nginx/build/LuaJIT-2.1-20140109 && $(MAKE) install TARGET_STRIP=@: CCDEBUG=-g PREFIX=/usr/local/openresty/luajit DESTDIR=$(DESTDIR)
	cd /home/qingfeng/learning/nginx/nginx/build/lua-cjson-1.0.3 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/lua-redis-parser-0.10 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/lua-rds-parser-0.05 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_INCLUDE_DIR=/home/qingfeng/learning/nginx/nginx/build/luajit-root/usr/local/openresty/luajit/include/luajit-2.1 LUA_LIB_DIR=/usr/local/openresty/lualib CC=gcc
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-dns-0.11 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-memcached-0.13 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-redis-0.18 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-mysql-0.14 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-string-0.08 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-upload-0.09 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-websocket-0.02 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-lock-0.02 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/lua-resty-core-0.0.3 && $(MAKE) install DESTDIR=$(DESTDIR) LUA_LIB_DIR=/usr/local/openresty/lualib INSTALL=/home/qingfeng/learning/nginx/nginx/build/install
	cd /home/qingfeng/learning/nginx/nginx/build/nginx-1.5.8 && $(MAKE) install DESTDIR=$(DESTDIR)

clean:
	rm -rf build
