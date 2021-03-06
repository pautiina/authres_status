<?php

$labels = array();
$labels['nosignature'] = 'İmza bilgisi yok';
$labels['noauthresults'] = 'İmza bulundu fakat doğrulama sonucu başlığı yok. Sunucu yapılandırma problemi olabilir mi?';
$labels['signaturepass'] = 'Gönderici alan adından gelen imza(lar) geçerli.  Doğrulama yapan';
$labels['partialpass'] = 'Bazı imzalar geçersiz fakat en az bir tanesi bu gönderici alan adı için geçerli. Doğrulayan';
$labels['thirdparty'] = '3. taraf tarafından imzalanmış. İmza var ancak gönderici adresinden farklı bir alan adı için. Şunun için doğrulandı:';
$labels['temporaryinvalid'] = 'İmza (geçici olarak) geçerli değil. Doğrulayan:';
$labels['invalidsignature'] = 'İmza geçersiz. Doğrulayan:';

$labels['for'] = 'için';
$labels['by'] = 'tarafından';

$labels['section_title']  = 'Doğrulama Durumu';
$labels['column_title']  = 'Doğrulama Sonucu';

$labels['title_enable_column']  = 'Sütun Kullanılsın';
$labels['label_enable_column']  = 'İleti listesinde doğrulama sonucu sütunu kullanılsın';
$labels['label_fallback_verifier'] = 'İç DKIM doğrulayıcısı kullanılsın (İmza bulunmuş ancak doğrulama sonucu başlığı yok ise)';

$labels['title_trusted_mtas'] = 'Güvenilen MTA Kodlar';
$labels['label_trusted_mtas'] = 'Güvendiğiniz MTA kimlik doğrulama hizmeti kodlarının listesini virgül ile ayırarak yazın. Yalnız bu MTA sonuçları görüntülenir';

$labels['title_include_status'] = 'Yalnız aşağıdaki durumlar görüntülensin';
$labels['label_include_status1']  = 'İmza bulunamadı';
$labels['label_include_status2']  = 'İmza bulundu ancak doğrulama sonucu başlığı yok';
$labels['label_include_status4']  = 'Tüm imzalar doğrulandı';
$labels['label_include_status8']  = 'En az bir imza doğrulandı';
$labels['label_include_status16']  = 'Üçüncü taraf imzası';
$labels['label_include_status32']  = 'İmza geçici olarak başarısız';
$labels['label_include_status64']  = 'İmza kalıcı olarak başarısız';

?>
