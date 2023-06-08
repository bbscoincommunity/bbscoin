![BBSCoin](https://github.com/bbscoin/bbscoin/blob/master/logos/bbscoin.png "BBSCoin")

# BBSCoin(BBS)

This repo contains daemons for blockchain, payment and wallet service.

## Building BBSCoin 

### On Ubuntu 16.04/18.04

```
sudo apt-get install build-essential libboost-all-dev git cmake
git clone https://github.com/bbscoincommunity/bbscoin.git
cd bbscoin
make
```

You can see the binaries in the src folder

### On CentOS 7

```
yum install git cmake gcc-c++ gcc glibc-static wget libstdc++-static
wget https://boostorg.jfrog.io/artifactory/main/release/1.66.0/source/boost_1_66_0.tar.gz
tar xzvf ./boost_1_66_0.tar.gz
cd ./boost_1_66_0
./bootstrap.sh
./b2 install
cd ..
git clone https://github.com/bbscoincommunity/bbscoin.git
cd ./bbscoin
make
```

You can see the binaries in the src folder

### On *nix

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55.

You may download them from:

* http://gcc.gnu.org/
* http://www.cmake.org/
* http://www.boost.org/
* Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run `make`. The resulting executables can be found in `build/release/src`.

### On Windows
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55. You may download them from:

* http://www.microsoft.com/
* http://www.cmake.org/
* http://www.boost.org/

To build, change to a directory where this file is located, and run theas commands: 
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```

And then do Build.
Good luck!

### On OSX
```
brew update
brew install cmake
brew install boost
git clone https://github.com/bbscoincommunity/bbscoin.git
cd bbscoin
make
```
The resulting executables can be found in `build/release/src`.

**Advanced options:**

* Parallel build: run `make -j<number of threads>` instead of `make`.
* Debug build: run `make build-debug`.
* Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.
* Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

## Donate
BBS: <br>fyU3ffhWgpR92f3XZQjTWGjXrB4kYoX7mjKimyoPmAJ1UnN64JoKbuzMzuKQsz6xbuMv4Wi4oGTztUK184Jtds1u1efrn2smr <br><br>
BTC: <br>1JHY7XZtUj862nt7ZU1jQ9UHvKu57i6siu <br><br>
ETH: <br>0xfC7CA5C949bBbB57cc2D75E57Cb586b30bb61b96 <br><br>
TRX: <br>TBwhDfDTKXurP9iYtRVcXg1MgMfCXGdJYk <br><br>
BNB: <br>bnb1xu0mp9n95694ynkzvc0x7zd4jd5xfyatfrntxx <br><br>

## Links

* Official Web Site: https://bbscoin.click
* Official Twitter: https://twitter.com/bbs_coin
