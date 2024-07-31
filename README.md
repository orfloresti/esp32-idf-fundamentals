## Using Espressif-IDE

*NOTE* To force using a specific serial port change variable `${serial_port}` to hardcoded port

To edit the variable got to: Edit Configuration (Launch configurations) > Main (Tab) > Arguments (Text area)

`${IDF_PY} -B ${BUILD_DIR} -p ${serial_port} flash`

example

`${IDF_PY} -B ${BUILD_DIR} -p COM11 flash`
