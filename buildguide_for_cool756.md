# Build guide(cool756 ver.1.0)

## Parts list


| No. | Patrs | Quantity | remarks | Suppliers | Cost |
|--|--|--|--|--|--|
|番号|名前|数|備考|調達先|参考価格（送料込）|<br>
|1|PCB|1|50%keyboard<br>keyboard|[elecrow](https://www.elecrow.com)<br>[JLCPCB](https://jlcpcb.com)<br>[ALLPCB](https://www.allpcb.com)|10枚で130〜140ドル|<br>
|2-1|Switch Plate<br>スイッチプレート|１|↑|↑|↑|
|2-2|Bottom Plate<br>ボトムプレート|１|↑|↑|↑|
|3|M2screw<br>M2ネジ|26|4mm<br>CoverPlateで使用|DIYショップなど|10本で100円程度|
|4|M2spacer<br>M2スペーサー|13|8mmメス-メス|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/c/c10/)<br>[遊舎工房](https://yushakobo.jp)|20本で800円程度|
|5|pro micro|1|ピンヘッダ含む|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|価格変動中|
|6|Swith socket<br>スイッチソケット|56|cherry MX互換<br>無くても可|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|10個で165円程度|
|7|Diode<br>ダイオード|56|リードタイプでもSMDでも可|[遊舎工房](https://yushakobo.jp)<br>[Talp Keyboard](https://talpkeyboard.net)<br>[Daily Craft Keyboard](https://shop.dailycraft.jp)等|100個で220円程度から|

この他に、USBケーブル、キーキャップ等が必要です。

## Firmware

[Here](https://github.com/telzo2000/cool756/tree/main/firmware)

<br>
[remap](https://remap-keys.app/)

<br>

## Build

Please read it and then work on it.
<br>
一読してから、作業をしてください。
<br><br>

### 1 Parts check

Front side（表面）<br>
![](img/img00007.jpg)

Please cut.
<br>
切り離してください。
<br>
![](img/img00008.jpg)
![](img/img00009.jpg)


### 2 Diode soldering

Solder the diode on the back side.
<br>
裏面にダイオードのハンダ付けをします。
<br>

There are lead type and SMD diodes.
<br>
ダイオードはリードタイプか、SMDがあります。
<br>
Here, we will explain the lead type soldering.
<br>
ここでは、リードタイプのハンダ付けの説明をします。
<br>
However, those who adopt the choc switch should use SMD diodes.
<br>
ただし、chocスイッチを採用する人は、SMDのダイオードを使用してください。
<br>


Use a lead bender to bend the legs of the diode.
<br>
リードベンダーを使い、ダイオードの足を曲げます。
<br>


Insert the diode into the board.
<br>
ダイオードを基板に挿しこみます。
<br>

Please pay attention to the orientation of the diode.
<br>
ダイオードの向きに注意してください。
<br>


Secure the diode with masking tape, then face up.
<br>
マスキングテープでダイオードを固定してから、表面を上にします。
<br>
Solder the protruding legs.
<br>
はみ出ている足部分に、ハンダ付けをします。
<br>
After soldering, use nippers to cut off the protruding legs.
<br>
はんだ付けが終わったら、はみ出ている足をニッパーで切り取ってください。
<br>

[８倍速　Diodeハンダ付け動画](https://youtu.be/Yaodh2-XxV4)


<br>
<br>

## Case 1
If you use cool756 with hot swap, please proceed here.
<br>
cool756をホットスワップで使用する場合、こちらを進めてください。

### 3 Soldering switch sockets

Solder the switch sockets on the back side.
<br>
裏面にスイッチソケットのハンダ付けをします。
<br>
ここでは、cherryMXスイッチのハンダ付けを行います。
<br>
Place the switch socket so that the white silk is hidden.
<br>
白いシルクが隠れるように、スイッチソケットを乗せてください。
<br>
That is the correct switch socket orientation.
<br>
それが正しいスイッチソケットの向きになります。
<br>
When using a choc switch, place the switch socket so that the letters choc are hidden.
<br>

Apply solder to both pads.
<br>
両方のパッドにハンダを盛ります。
<br>
Place the switch socket and fix it with a warm soldering iron while melting the solder.
<br>
スイッチソケットを乗せて、温めたハンダゴテで、ハンダを溶かしながら、固定します。
<br>
You can make it easier by working while holding it with tweezers.
<br>
ピンセットで押さえながら、作業をすると楽にできます。
<br>

[８倍速　Switch socketハンダ付け動画](https://youtu.be/E__mHvmIXQo)

<br><br>

### 4 Pro micro

Solder the pro micro.
<br>
pro microのハンダ付けをします。
<br>
For cool756, in order to pursue thinness, the pro micro is attached directly to the board without using a pin header.
<br>
cool756では、薄さを求めるために、pro microをピンヘッダを使わずに、基板に直付けします。
<br>
Here, it is the surface with the USB terminal and parts of the pro micro.
<br>
ここでは、pro microのUSB端子や部品が付いている表面とします。
<br>
<br>
Install the pro micro surface facing the PCB side.
A part of the PCB is cut out so that the pro micro's USB terminal and parts do not interfere with the PCB.
<br>
pro microの表面がPCB側に向くよう取り付けます。
pro microのUSB端子や部品がPCBに干渉しないよう、PCBの一部が切り抜かれています。
<br>
Place the pro micro so that the "RAW" printed on the pro micro is on the numeric keypad side.
<br>
pro microの設置向きは、pro microの「RAW」の印字がテンキー側にしてください。
<br>
<br>
＜If you have a breadboardブレッドボードがある場合＞
<br>
The installation procedure is as follows.
<br>
取り付け方は次の手順になります。
<br>
①Insert the pin header into the breadboard, and pass the pin header through the pro micro with the surface facing the breadboard.
<br>
①ブレッドボードにピンヘッダを挿して、pro microの表面をブレッドボード側に向けて、ピンヘッダを通します。
<br>
② Solder from the back side of pro micro and fix the pin header.
<br>
②pro microの裏面からハンダ付けをして、ピンヘッダを固定します。
<br>
③Pull out the pro micro from the breadboard.
<br>
③ブレッドボードからpro microを抜きます。
<br>
④Remove the plastic attached to the pin header using radio pliers or the like.
<br>
④ピンヘッダに付いているプラスチックをラジオペンチ等を用いて、外します。
<br>
⑤ Insert so that the surface of pro micro faces the PCB side. Temporarily fix with masking tape.
<br>
⑤pro microの表面がPCB側に向くように、挿します。マスキングテープ等で仮固定します。
<br>
⑥ Solder from the opposite side of the PCB where the pro micro is inserted. Cut pins that are too long with nippers.
<br>
⑥pro microを挿したPCBの反対側からハンダ付けをします。長すぎるピンはニッパー等で切ってください。
<br>
<br>
＜If you don't have a breadboardブレッドボードがない場合＞
<br>

The installation procedure is as follows.
<br>
取り付け方は次の手順になります。
<br>
①Insert the pin header from the back of pro micro, then pro micro, then PCB.
Temporarily secure with masking tape.
<br>
①ピンヘッダをpro microの裏面から、pro micro、PCBの順で挿します。
マスキングテープで仮固定します。
<br>
②Solder the pin header from the PCB side.
<br>
②PCB側からピンヘッダをハンダ付けします。
<br>
③Remove the plastic pin header on the back of the pro micro using needle nose pliers.
<br>
③pro micro裏面のピンヘッダのプラスチックをラジオペンチ等を用いて、外します。
<br>
④Solder the back of the pro micro. Cut pins that are too long with nippers.
<br>
④pro microの裏面のハンダ付けをします。長すぎるピンはニッパー等で切ってください。
<br>
<br>



### 5　Test


Please write the firmware and check the operation.
<br>
ファームウェアを書き込んで、動作確認をしてください。
<br>

Install a switch or measure continuity with tweezers, etc.
<br>
スイッチを取り付けるか、ピンセット等で導通をはかるかを行います。
<br>
<br>

Firmware

[github](https://github.com/telzo2000/cool756/tree/main/firmware)



[remap](https://remap-keys.app/)

<br>
If you have a switch that doesn't respond, use a hot soldering iron to warm up the switch socket,diode and pro micro terminals.
<br>
もし、反応しないスイッチがあったら、温めたハンダゴテで、そのスイッチソケットやダイオード、pro microの端子を温めてください。
<br>
Also make sure the diode is oriented correctly.
<br>
また、ダイオードの向きが正しいか確認してください。
<br>


### 6 Installation of key switch

Plug the key switch into the switch plate and then into the switch socket on the PCB.
<br>
スイッチプレートにキースイッチを差し込み、そのあと、PCBのスイッチソケットに差し込んでください。
<br>
<br>

### 7 Bottom plate

Insert the M2 screw from the bottom surface of the bottom plate and tighten it with the M2 spacer on the top surface.
<br>
ボトムプレートの下面からM2ネジを差し込み、上面でM2スペーサーで締めてください。
<br>
13 locations.
<br>
13箇所行います。
<br>
<br>

### Option Middle plate

If you have the optional middle plate, please install the aluminum feet first.
<br>
オプションのミドルプレートがある場合、最初に、アルミ足を取り付けてください。
<br>
<br>
Next, stack the acrylic parts so that they pass through the bottom plate spacer.
<br>
次にボトムプレートのスペーサーを通すように、アクリル部品を重ねてください。
<br>

### 8 Finish

Place the switch plate and PCB on the bottom plate and tighten the 13 M2 screws.
<br>
ボトムプレートの上に、スイッチプレートとPCBを載せて、M2ネジで13箇所を締めてください。
<br>
<br>
ミドルプレート使用時<br>
![](img/img00003.jpg)

## Case2

If you want to solder directly without using a switch socket, proceed here.
<br>
スイッチソケットを使用せず、直接ハンダ付けをする場合は、こちらを進めてください。
<br>
<br>

### 3 Switch plate

Insert your favorite key switch from the top of the switch plate.
<br>
スイッチプレートの上面から、お好みのキースイッチを差し込んでください。
<br>

Note the orientation of the key switch.
<br>
キースイッチの向きに注意してください。
<br>
Good<br>
![](img/img00011.jpg)
<br>
Not good<br>
![](img/img00010.jpg)

<br>
<br>

### 4 Pro micro

Solder the pro micro.
<br>
pro microのハンダ付けをします。
<br>
For cool756, in order to pursue thinness, the pro micro is attached directly to the board without using a pin header.
<br>
cool756では、薄さを求めるために、pro microをピンヘッダを使わずに、基板に直付けします。
<br>
Here, it is the surface with the USB terminal and parts of the pro micro.
<br>
ここでは、pro microのUSB端子や部品が付いている表面とします。
<br>
<br>
Install the pro micro surface facing the PCB side.
A part of the PCB is cut out so that the pro micro's USB terminal and parts do not interfere with the PCB.
<br>
pro microの表面がPCB側に向くよう取り付けます。
pro microのUSB端子や部品がPCBに干渉しないよう、PCBの一部が切り抜かれています。
<br>
Place the pro micro so that the "RAW" printed on the pro micro is on the numeric keypad side.
<br>
pro microの設置向きは、pro microの「RAW」の印字がテンキー側にしてください。
<br>
<br>
＜If you have a breadboardブレッドボードがある場合＞
<br>
The installation procedure is as follows.
<br>
取り付け方は次の手順になります。
<br>
①Insert the pin header into the breadboard, and pass the pin header through the pro micro with the surface facing the breadboard.
<br>
①ブレッドボードにピンヘッダを挿して、pro microの表面をブレッドボード側に向けて、ピンヘッダを通します。
<br>
② Solder from the back side of pro micro and fix the pin header.
<br>
②pro microの裏面からハンダ付けをして、ピンヘッダを固定します。
<br>
③Pull out the pro micro from the breadboard.
<br>
③ブレッドボードからpro microを抜きます。
<br>
④Remove the plastic attached to the pin header using radio pliers or the like.
<br>
④ピンヘッダに付いているプラスチックをラジオペンチ等を用いて、外します。
<br>
⑤ Insert so that the surface of pro micro faces the PCB side. Temporarily fix with masking tape.
<br>
⑤pro microの表面がPCB側に向くように、挿します。マスキングテープ等で仮固定します。
<br>
⑥ Solder from the opposite side of the PCB where the pro micro is inserted. Cut pins that are too long with nippers.
<br>
⑥pro microを挿したPCBの反対側からハンダ付けをします。長すぎるピンはニッパー等で切ってください。
<br>
<br>
＜If you don't have a breadboardブレッドボードがない場合＞
<br>

The installation procedure is as follows.
<br>
取り付け方は次の手順になります。
<br>
①Insert the pin header from the back of pro micro, then pro micro, then PCB.
Temporarily secure with masking tape.
<br>
①ピンヘッダをpro microの裏面から、pro micro、PCBの順で挿します。
マスキングテープで仮固定します。
<br>
②Solder the pin header from the PCB side.
<br>
②PCB側からピンヘッダをハンダ付けします。
<br>
③Remove the plastic pin header on the back of the pro micro using needle nose pliers.
<br>
③pro micro裏面のピンヘッダのプラスチックをラジオペンチ等を用いて、外します。
<br>
④Solder the back of the pro micro. Cut pins that are too long with nippers.
<br>
④pro microの裏面のハンダ付けをします。長すぎるピンはニッパー等で切ってください。
<br>
<br>



### 5　Test


Please write the firmware and check the operation.
<br>
ファームウェアを書き込んで、動作確認をしてください。
<br>
Check for continuity with tweezers or the like.
<br>
ピンセット等で導通をはかるかを行います。
<br>
<br>

Firmware

[github](https://github.com/telzo2000/cool756/tree/main/firmware)



[remap](https://remap-keys.app/)

<br>
If you have a switch that doesn't respond, use a hot soldering iron to warm up the diode and pro micro terminals.
<br>
もし、反応しないスイッチがあったら、温めたハンダゴテで、ダイオードやpro microの端子を温めてください。
<br>
Also make sure the diode is oriented correctly.
<br>
また、ダイオードの向きが正しいか確認してください。
<br>
<br>


### 6 Soldering keyswitch

Turn the switch plate with the key switch upside down.
<br>
キースイッチの刺さったスイッチプレートを逆さの向きにします。
<br>
Stack the PCBs in the same way upside down.
<br>
同じ様に逆さの向きにしたPCBを重ねます。
<br>
<br>
Check to see if the key switch legs are sticking out of the PCB.
<br>
PCBからキースイッチの足が出ているか確認してください。
<br>
If it's OK, solder all the key switch legs and PCB terminals.
<br>
問題ないのであれば、全てのキースイッチの足とPCBの端子をはんだ付けします。
<br>

### 7 Bottom plate

Insert the M2 screw from the bottom surface of the bottom plate and tighten it with the M2 spacer on the top surface.
<br>
ボトムプレートの下面からM2ネジを差し込み、上面でM2スペーサーで締めてください。
<br>
13 locations.
<br>
13箇所行います。
<br>
<br>

### Option Middle plate

If you have the optional middle plate, please install the aluminum feet first.
<br>
オプションのミドルプレートがある場合、最初に、アルミ足を取り付けてください。
<br>
<br>
Next, stack the acrylic parts so that they pass through the bottom plate spacer.
<br>
次にボトムプレートのスペーサーを通すように、アクリル部品を重ねてください。
<br>

### 8 Finish

Place the switch plate and PCB on the bottom plate and tighten the 13 M2 screws.
<br>
ボトムプレートの上に、スイッチプレートとPCBを載せて、M2ネジで13箇所を締めてください。
<br>
<br>
ミドルプレート使用時<br>

![](img/img00003.jpg)

### Option  Installing PIM447 Trackball

A PIM447trackball can be attached to the cool756.
<br><br>
cool756に、PIM447trackballを取り付けることができます。
<br>
<br>
In addition to PIM447, four M2 screws 8mm (low head screws), eight M2 nuts, and a pin header are required.
<br><br>
PIM447との他に、M2ネジ8mm４本（低頭ネジ）、M2ナット８個、ピンヘッダが必要となります。
<br><br>
上からネジを差し込み、下でナットを締めます。<br>
![](img/img00014.jpg)
![](img/img00015.jpg)

PCBに差し込んで、その下からナットを締めます。<br>
![](img/img00013.jpg)
![](img/img00012.jpg)

ピンの長さを調節して、差し込んではんだ付けをします。<br>
![](img/img00017.jpg)
![](img/img00018.jpg)

スイッチプレートを被せると、このようになります。<br>
![](img/img00001.jpg)
<br>
<br>




Have a fun selfmade keyboard life!
<br>
楽しい自作キーボード生活を!<br>

![](img/img00005.jpg)

