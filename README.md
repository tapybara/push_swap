# push_swap

## ▼ 実装手順
### **1. 前処理**
1.	構造体（双方向循環リスト）を定義  
	※ 番兵ノード（Sentinel node）を設定。
1.	構造体を操作する基本関数を実装
	| Func name | Description | decline |  | Remark |
	|:------|:--------|:-------|:------|:------
	| dlist_new |  |  |  |
	| dlist_add_front |  |  |  |
	| dlist_add_back |  |  |  |
	| dlist_delete |  |  |  |
	| dlist_clear |  |  |  |
	| dlist_listsize |  |  |  |
1.	標準入力の数が3以上かどうかをチェック -> If not Error
1.	標準入力をそれぞれint型に変換してstack_aを生成 -> 格納。
1.	(stack_bも予め確保しておく？)
1.	標準入力をstack aに格納
1.	stack_aがソート済みかどうかをチェック -> Ifnot Error
1.	（座標圧縮？）
1.	stack_aのリスト数を数える。
1.	main文のif分岐の条件設定
### **2. ソート処理**
1.	各種コマンドの実装（sa, sb, pa , pb, ra, rb, rra, rrb）