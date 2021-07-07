/*
 * _coder_ConEncoder_info.c
 *
 * Code generation for function '_coder_ConEncoder_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ConEncoder.h"
#include "_coder_ConEncoder_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("ConEncoder"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (738335.80064814817));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.4.0.813654 (R2018a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[30] = {
    "789ced5ddd6f2b4715df5eb5e556a8ad554aabaa2adc5baa5268b9766c274e5a21fced38f1b71dc7717bebecda6b7be3fdf2eedab1c34b7800f5a10f3cf280c4"
    "2b2001a52f5ca908a58887fe012d123cf182c43f00bcb2f67a93ecde9d7a2f1e8fbd9b19291a4f8e3dbfd9a333e7cc9c337396782c9d7d8c208867d4bf5beadf",
    "67cf4c5a04f134a115cfacbe45188b99fed8acfe9ea9ad972788c7a77d3c6da2ff7c5637055ea1478ad660199ece0d388a96d4064f72f465372d81637892572a"
    "639126245a16d821dd9a52da0c4b57188ece08d71abb8cdae092d748978d0969f239d6a59bbdf28023a4ae7c355cf67a83b8c69f9f5d7bfe5bd79eff710bfe5c",
    "a7ebcf1b04f0c763a2bf9bb85f7fdb1b179a038ee615d95b65145aa2983b11b623488cd2e5bc6d9511ac3726f009be29b468e91e777d9ce2b5715cefff498b71"
    "5ea7ebe3ba656aebe529d3f7b57227acd5af8675fc6340ff567cb2c27fd2d4262ebfa75128461909d2d5f32e1baf250c2896bec2fbe58278bb403c23fddd74a6",
    "96b81f7bdb5b90848e44727726322b7bb3914a2612f596fcbe8d6dd2ab08024b09232fcdb15e96a1bc1ca9b024e51544d9abf1e91e378f4f76e5c25cebe529e2"
    "f6ecd3c547872f7d114187a7959b823702f46757ee5e00e0794cf47caa255685b24871fb0799f849b9d951756eec6a1c853938f3c64100daa8fac7f3d7588cf2",
    "f61a343d7edbd4262ebfa751d4e7a3185e10e7d92dbb78cf02f18cf4f6806f2a8cc037ba24df5215bb8eff6041fcf21c7c9d3e918bc22282214acc905468afce"
    "40cdfca3d44b6f7ce56f58cfafab9eff3a00cf63a26f494224146807baa10e7d5638adefa48bfe32e11e3d8fe7b375ad17a3fcddbbd4fbe780feecf2ed0e00cf",
    "63a26b5b1746ddfc49ea76e69edc24597a24c6044e2415465d71af6a7d7fb120de1110cf487fe4f5c1e4efcd29d7bc6fea6cf33ec4b699f4a0949ff0fb7ff9da"
    "5fb13d58121eaa757fb7254af5da59a2d909c533a1716040468adb516c0f6ea43d38cf21f3e7a8aa8c637878fe9cc74ded2b3c8dd2ec9213e7e225de470be2ed",
    "01f18cf445f68334ab7ef06a9cd2153c42bfce272f3e85f5bbd3f57b873c0ae50387b97e888a28b14d321fa483c514d6ef3752bf1379a4fa9d1c61fd6e4fbf93"
    "a315e8f70758bf3b5fbf4b7d9f78c2c8c108b75508f105aa16d8afca78fdbe76fa1de4e75e4e7cb6109e56e14218963c3e0fc0f798e824cb3618be31f1547468",
    "a921917c671acd476577062af256109e5fa701c433d2a1c98f1503555942e8d7f9f3b77ff139b60b4bc24365170e73d5a85c3b6aee044795fd40882defc647e4"
    "ae7becc205e0f7785e1b8b510e83e179f6c82eff9e36b509d3f774baca9106b3159468566506b1b81d301710be5e60ed07f273f074fa42fb01cddd7fc52fb47a",
    "dffbdc3b38beeb74bdcf33253a330ea6fdc956a5d9ccf6ab42811db9683ff019e0f776f9d806f4ef31d121cfe3bbd3b6dc50ad01c728cc906e3459529611cbe3"
    "710f5abcf715009ec74437c57b1939ad19c098f6f82bf30f2dbaafac02f18c7438f15e23db265b4b8476e1c317b09fc8f17621c9670ad1c861ee8ce146f913b1",
    "c5e5959c9bce7762bb60fd5cb6e4f11c9e5d781980e731d11fb20b49562015dd2a38d72e548078463a2cbb70c536e37d9063c038e1c9cdf9af5ec176c1f176e1"
    "b41d60b871c2efdb9532bdf24624982a77f22eda2fe07dbff5f88d72f7ceaaf5ffec4063846585e694beaa7881b3f4ff75b6a1d6ff177ff8f7dfb1bfc8e9fa3f",
    "4d45d21b5b626f98a8f60f7dbda82f5864f65ca4fff17cb6aef562943fdfa51df800d09f5dbebd0ac0f398e85f620772c2f4aeb6f63da7c68fdf05e219e9f0e5"
    "67c63ee4e7ccb05d58261e2abba0f8f7c7b57ea756ed767aa1524ae9ed1546091c3fbeec6f69f77d6cf88b58bac12aa6e71101e35dcef9a262785a9d97a09d2f",
    "7a0e80ef31d1357f19d990990e4fb726e174edffabba37b6b6eb0b2b3932f00df9fae2bf1f67f0b9a275b50b76ef0f8bc9cd6c8012f27bb1825ced5698546e3f"
    "5321b05dc076412de795b0f6e1fe4aec429b552647aca647abb6668995b05d982f4746be218f23fc0ee70f5a5fbb60fbbce9597733b12ba77672156eaf33ac72",
    "4c5d3870d17e01cf67eb5a2f46f9bbca0b770ee80f9f33b28787cf192d0b4f2b37050f9f3382d33fb603d6b55e8cf2f7d68df30f39269e8cfd43d37253f0b07f"
    "084eff8b9e332501fd7b4cf465f8873ab4d2a08401df921b8a7e9e15a93cde61a0ed0b5e02e0794c74d3bea03d392e9955ffc7cee84edd17948078463a9c7dc1",
    "15db5690a7e2d7d83fb4be76c1eebe60b81d0886e8bdfd7c3bbea3d443642913633817f987b05db07e2e5bf218beb20b203c58eb734e144e69fc1e81b9d7d635"
    "3ea1cc437efec31ffbb1ffc7e97abecfefe4ca2541189f16b653e4469d8f0b149d708f9e77eafc1501e35acef9205f58abfdd0d6fbdf04e07b4cf487e200d101",
    "c32a693e37e06889693a361e5c03e219e9b0e20046b621b503f8fce812f190bd4f66d88f45dabbc3ed4a31386e2638de9facb32e5aef3bd50e1c03c60557de7e"
    "006d3d3fef7d328cac3eacc48c56a5d73f5a102f03c433d221e4199d710ab55f3ffce97753785def747d9e6bf60ed352b2d94e2ab54073a3b8193dca465d9447",
    "1aeb736331ca5b1c9a3e7f0280e7995166ee19c7fa6752403c237d5139988901ca739a1f7eb185f5b8d3f5f861b74a6f958be5cd52a538a8c5f7eb55a17ce0a2"
    "f3394e9dbf68fd33af86b5fa75ec9f21b07fe6fab8b17f66b578d83f03a7ff45f7e505539b307d4fa743b20377dbac32fd8854eeceb3d0ce67be08c0f398e816",
    "f91e4829d15999de5f5b3901e67798b00ba9beffedebefe375bfd3f5bdafd4d9182a7b3b82d4e9cae524d98926d3c338d6f737671e13067d0fda6fc0ceffcfc8"
    "bcb64455c6e2e445304ed5f34bcd03d86646744b1454f1f01af885360fe06ff0394be7ebf954a0372ef73b0c1babc47aa57eb453e91d24b09ebfb17a1e84072f",
    "feda66d4ed4cd7a97a7da9ef7934e8758d4fe8cfcf63bdbe4c3c54f7aa867d3a210e9bf24eed34200805b9bc1138aa13eed1ebcef2bf5ee9f5bb6d4692953683"
    "54fe2e8ea1f9edbf01c0f398e8d37b03bcd2680b122b08624318d2529b154e1b4d2d47e7a2fadf5c40e3d18b8e77f17fe2e9fd1f9bda663c9d0ee5de05907f28",
    "d707177ffce713d89fb3aef6c0ee3a5fde4f8c12f1b3b3c2dec81fccfa7db16264c3e7a273f6ff02fcde2e1f7f02e8df63a22f7b5edffdf22f34ba342bdab98f"
    "04575e53d0f607f3eebd4ed6bd937ac57106866fd1a334af403b27909c330e9d0e63df80360f0ff100c7779d6f1fca6391e136fba5c30d866a05d3f56221bbe1",
    "267f3f9ebfc602cae3ef743fffa3e655c07e7eebf1637f101a3cece787d33f5eff1bc70b575ed3c8f22da88fce9123e7da83a5c6078cf7b3a69c5a417e9d072f"
    "e2bc9b8eb70752df279e307230c26d15427c81aa05f6ab7214db036c0fac9fdb182f466b0f181edb037bf680e157600f3ec1f6c0f9f6a0431e85f281c35c3f44",
    "4594d826990fd2c1a28beeebe278b175ad1783fcfde3189a7e7f547fffa278a8efefbad82f88fdfa4bc4c37e7d38fd3b56af9fd192200f56936f2d7c3f3cad2f"
    "de43a6e7db03769a42199ffb04afe3659194da03de3be115fa75fcf9efb19fdff9fa5ed9f273a5f861aa5b0f08674325cb25b31b8a8bf4fda2f3b8606a13a6ef",
    "e97447dfd325aecef37f00e8cf2ebfde00e0794c74d3f9195214d97194e149695c9edabce4806f2a8cc0c38a333f3b675c3abd3dc36d7449bea51a041d7f6df3"
    "6f5bae1b80ecd4cd044a3bf1f1af24ecef71ba9d2816634aaf70e20b51f5dc7e8eaa90dbf9ac9c748f9dc0f3dbfab9ecc963089afdf81600cf63a29bedc75060",
    "5a114922c7499654149a67f8cef47b4ebd37f0de1c3c9d0e499e2cd887fcfd5ce7ffa1b09d70ba9d38dbdb0dc40ec41a57a4f2ad48adbd9b1d717917e5fdb900"
    "fcde2e1feb80fe3d263aacfd84e6416a4c5fb0d4d0935f1288e5f0a28ef3002d88b7b47de8dadc2bc77980968987f300c1e97fd1f8c121a07f8f890e4bfff382",
    "9223737969f6de6dc4e77e0ea1c50be6e57566649ee409e7c60bd2403c231d469e7e9553abf003e1f8f012f150e589e84706792e38ae057d25c93f886dd03b43"
    "2e47b847bfe3796c3d7ea3dcbd062d3f04ceeb0cc233d2715ee747c5d3ca4dc1c3799de1f48fd7f7d6b55e40ebfb73407f76f9f63200cf63a25bfa7526af5d17",
    "34c79653edc00110cf48876307ded4f8e69df26dba86406807f0fbd6978887ca0e50ddad428d67955659e012037e374025a27b2e3affbfb6feda753a37749e83"
    "e6d77f1e80e731d14dfa9f9624c170ffea78c1713cea7dafb55cffcbea20e99657d3fa33dd6f360153ce215dffff69ff08fbf79daef7477cf1f42c2b72d1543f",
    "9e94b7637bfda1e073917f7f6dcf0159dd03de0a4a34ab5a81d9b5df0ead342861c0b7e486d2363dd73160dc70ef8131d0ec815d797cc82f441ea80d74fb8081"
    "8ab61574407e20803f68ca2ea4f9812e366fffe8736c079684876aded1bd44b3a494377b5c611caf057c8968e4e0c445ef79bc00fcde2e1f1b80fe3d26fa641e",
    "1716da0048cc9054682fc94ef23e4c523f4cfc400d89e43b88f37ea925882cdeab7b7c70bcf7cbe244d3db61973e9e4941280f9f1ebc8efd3c4ed7f3dbfd50be"
    "d267e39bbd68b7524c95957e3cde74d1b97f3c8fadc76f94bb3b38de4bacb1bf07c77b2fcb4dc1c3f15e38fd63fd6f3dfe659df7599738afb980c6a3171ce735",
    "8edb86fec771de25e2e1382f9cfeb1feb71e3f48ffff14d09f5d7e7d0780e731d1adf24318af3aa7f9024b36e9d9f7f5f1890b8e6fd57922a839f83a1de23d72"
    "4bb6ae202f28f5d5131c1f76babd10c8cc094592a9582bb07d22d7fc74b62e8e717c18cfef69790b5a7c60fe7b8327d9d164daa9f1811c10cf4887913f4ee715",
    "da7ca1e1dbdfc7f77d1dafef4f0fd37292ed5593feb654668727f93dfeace8a23830d6f7d6cf654f1eefb9ce6fb4aab801f61b2d0b4f2b37050ffb8d16ebff7f"
    "e2ee3469", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 69344U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_ConEncoder_info.c) */
