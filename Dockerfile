FROM gcc:12.1 as build
WORKDIR /build
ADD logs.cc /build
RUN g++ -static logs.cc -o logs

FROM scratch as run
WORKDIR /bin
COPY --from=build /build/logs .
CMD ["logs"]
