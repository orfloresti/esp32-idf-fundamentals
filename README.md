## Using Espressif-IDE

*NOTE* To force use a specific por change variable `${serial_port}` for the port

To edit the variable got to: Edit Configuration (Launch configurations) > Main (Tab) > Arguments (Text area)

`${IDF_PY} -B ${BUILD_DIR} -p ${serial_port} flash`

example

`${IDF_PY} -B ${BUILD_DIR} -p COM11 flash`