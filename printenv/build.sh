gcc printenv.c -o printenv -static -s && ls -l printenv
docker build -t printenv -f Dockerfile .
