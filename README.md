# MySQL with FaCE
Flash Memory as Cache Extension for MySQL.

FaCE is a new low-overhead caching strategy that uses flash memory as an extension to the RAM buffer of database systems. FaCE aims at improving the transaction throughput as well as shortening the recovery time from a system failure.

You can see the previous version of FaCE in [here](https://github.com/meeeejin/FaCE-temp).

## Documentation

### Features

- Caching dirty pages
- Multi-Vesion FIFO replacement
- Group replacement
- Group second chance

### Configuration

You can add and set the value of parameter related to the SSD cache in the MySQL option file (**my.cnf**).

<table class="tg">
  <col width="45%">
  <col width="65%">
  <tr>
    <td>innodb_use_ssd_cache</td>
    <td>
      Specifies whether to use SSD cache. <b>true</b> or <b>false</b>.
    </td>
  </tr>
  <tr>
    <td>innodb_ssd_cache_file</td>
    <td>
      The paths to SSD cache.
    </td>
  </tr>
  <tr>
    <td>innodb_ssd_cache_size</td>
    <td>
      The size in bytes of the SSD cache. The default value is 2GB.
    </td>
  </tr>
</table>

### Reference

- Woon-Hak Kang, Sang-Won Lee, Bongki Moon, ["Flash-based Extended Cache for Higher Throughput and Faster Recovery"](http://arxiv.org/pdf/1208.0289v1.pdf), Proceedings of the VLDB Endowment (PVLDB), Vol. 5, No. 11, pp. 1615-1626 (2012)
- Woon-Hak Kang, Sang-Won Lee, Bongki Moon, ["Flash as cache extension for online transactional workloads"](http://link.springer.com/article/10.1007/s00778-015-0414-1), The VLDB Journal, Special Issue, Online ( 2015-11-30, pp 1-22 )
- [Detailed presentaion](http://dcslab.hanyang.ac.kr/nvramos12/presentation/[NVRAM]Lee_Sungkyun.pdf)

## Project Details
[Powerpoint slide on SlideShare](http://www.slideshare.net/meeeejin/mysql-with-face-63696738)
