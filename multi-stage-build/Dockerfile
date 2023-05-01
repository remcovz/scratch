FROM gcc:latest as build
COPY helloworld.c / 
RUN gcc helloworld.c -o /helloworld -static -s

FROM scratch
COPY --from=build /helloworld /
CMD ["/helloworld"]
