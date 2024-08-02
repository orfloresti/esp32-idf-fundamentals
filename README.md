## Espressif-IDE 

### Wiring for debuging using FT232H generic board

| Esp32  | FT232H |
|---|---|
| GPIO12 | AD1 (TDI) |
| GPIO15 | AD2 (TDO) |
| GPIO13 | AD0 (TCK) |
| GPIO14 | AD3 (TMS) |
| GND | GND |

### Force serial port (Not recomended)

*NOTE* To force using a specific serial port change variable `${serial_port}` to hardcoded port

To edit the variable got to: Edit Configuration (Launch configurations) > Main (Tab) > Arguments (Text area)

`${IDF_PY} -B ${BUILD_DIR} -p ${serial_port} flash`

example

`${IDF_PY} -B ${BUILD_DIR} -p COM11 flash`
