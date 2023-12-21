FROM gcr.io/oss-fuzz-base/base-builder
RUN apt-get update && apt-get install -y make autoconf automake libtool

COPY . $SRC/fast_obj
COPY .clusterfuzzlite/build.sh $SRC/build.sh
WORKDIR $SRC/fast_obj