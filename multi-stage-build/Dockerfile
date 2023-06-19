FROM gcc:latest as builder
COPY helloworld.c / 
RUN gcc helloworld.c -o /helloworld -static -s

FROM scratch
COPY --from=builder /helloworld /
CMD ["/helloworld"]
